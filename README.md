# ThirdEye
ThirdEye is a browser data extraction tool that utilizes VM detection, debugger detection and email exfiltration that targets linux-flavored machines.

This is a small project that prefaces my upcoming project: **Sly**.

## Usage
Compilation and deployment of the vulnerability is up to the attacker. All it requires is that you have a valid email address to receive the collected information and code execution on the target system.

In thirdeye.c, edit the email address that you would like to receive the information from. Then, you will define the password that your encrypted archive will use. If you know your target is running in a vm and would like to execute the program regardless, change the ```vmDetect = True``` to ```vmDetect = False```. Then compile as you typically would.
  ```bash
//standard gcc usage
  gcc thirdeye.c -o thirdeye
  ```

Once it is deployed on the target machine, one of these two actions will occur:
- If the target is running on a VM or Debugger and the tool detects it, the tool will self destruct completely, removing any trace of its existence and you will not receive an email. Assume your actions are actively being monitored.
- If you disabled VM detection or it is safe to execute, the tool will search the commonly used folders where browser information is stored and collect the data into a gzipped-tar file and encrypted. It will then email you the archive for your viewing and decryption. Once that has completed, it will remove all data associated with the program, remove any logs associated, finally removing itself and rendering the target untouched.
## Goals
I am using this tool as an opportunity to hone my malware-development skills in preperation for my project Sly. This tool will be usable in any situation where you would like to exfiltrate information without using exorbitant amounts of system resources or alerting any IPS/IDS systems.

Please only use this tool in an authorized environment. I do not endorse any illegal misuse or damages caused via this program and intend on it's users to act with integrity.

## Credit
Author: Diante J.
