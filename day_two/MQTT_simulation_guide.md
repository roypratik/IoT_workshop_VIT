1. Install Mosquitto Server and Client

Ubuntu ships with the older 1.6 version of Mosquitto. To install the latest version, add the official Mosquitto repository.

```sh
sudo add-apt-repository ppa:mosquitto-dev/mosquitto-ppa
```

2. Install the Mosquitto server and the client.

```sh
sudo apt install mosquitto mosquitto-clients
```

3. Check the status of the server.

```sh
sudo systemctl status mosquitto

mosquitto.service - Mosquitto MQTT Broker
     Loaded: loaded (/lib/systemd/system/mosquitto.service; enabled; vendor preset: enabled)
     Active: active (running) since Tue 2022-01-25 09:18:40 UTC; 25s ago
       Docs: man:mosquitto.conf(5)
             man:mosquitto(8)
   Main PID: 119694 (mosquitto)
      Tasks: 1 (limit: 2274)
     Memory: 1.0M
     CGroup: /system.slice/mosquitto.service
             ??119694 /usr/sbin/mosquitto -c /etc/mosquitto/mosquitto.conf
```

4. Configure MQTT Password Authentication

Mosquitto comes with a utility to generate a password file called ```mosquitto_passwd```. Mosquitto stores all the configurations in the ```/etc/mosquitto``` directory.

Run the following command to generate an encrypted password file at ```/etc/mosquitto/passwd``` for the username $username. Enter a password of your choice.

```sh
sudo mosquitto_passwd -c /etc/mosquitto/passwd username
Password:
Reenter password:
```

5. Next, create a ```default.conf``` file under the ```/etc/mosquitto/conf.d``` directory and open it for editing.

```sh
sudo nano /etc/mosquitto/conf.d/default.conf
```

6. Paste the following lines to specify the location of the password file. If you omit the listener field, it will always connect anonymously, irrespective of the configuration.

```sh
listener 1883
password_file /etc/mosquitto/passwd
```

7. Save the file by pressing Ctrl + X and entering Y when prompted.

8. Restart the Mosquitto server to implement the change.

```sh
sudo systemctl restart mosquitto
```

9. Test Mosquitto Client

To subscribe to a topic, run the mosquitto_sub -t command followed by the topic. For example, to subscribe to ```home/``` topic, run the following command.

```sh
mosquitto_sub -u username -P YOUR_PASSWORD -t "home/"
```

Don't close the existing window. Open a new terminal window to publish a message to the home/ topic using the following command.

```sh
mosquitto_pub -u username -P YOUR_PASSWORD -m "ON" -t "home/lights/kitchen"
```

Go back to the first terminal window, and you will receive ON payload.

```ON```

Next, send the OFF message on the same topic from the second terminal.

```sh
mosquitto_pub -u username -P YOUR_PASSWORD -m "OFF" -t "home/"
```
The first terminal will show the newly published message.

```ON```
```OFF```

10. If you try to send an unauthenticated comment, it will fail. For example, try the following command.

```sh
mosquitto_sub -t "home/lights/sitting_room"
Connection error: Connection Refused: not authorised.
```