# Install Node-red on Ubuntu

Getting started on Node-RED click [here](https://nodered.org/docs/getting-started/)

For Node-JS official installation guide click [here](https://github.com/nodesource/distributions).

Open the terminal and execute the following commands

> _If you have root access, you can omit the 'sudo' command as you already have full administrative privileges._

1. Download and import the Nodesource GPG key

```sh
sudo apt-get update
sudo apt-get install -y ca-certificates curl gnupg
sudo mkdir -p /etc/apt/keyrings
curl -fsSL https://deb.nodesource.com/gpgkey/nodesource-repo.gpg.key | sudo gpg --dearmor -o /etc/apt/keyrings/nodesource.gpg
```

2. Create deb repository

```sh
NODE_MAJOR=20
echo "deb [signed-by=/etc/apt/keyrings/nodesource.gpg] https://deb.nodesource.com/node_$NODE_MAJOR.x nodistro main" | sudo tee /etc/apt/sources.list.d/nodesource.list
```

> ***Optional***: ``NODE_MAJOR`` can be changed depending on the version you need.
>
> ```sh
> NODE_MAJOR=16
> NODE_MAJOR=18
> NODE_MAJOR=20
> ```

3. Run Update and Install

```sh
sudo apt-get update
sudo apt-get install nodejs -y
```

4. Checking installed version of Node-JS

```sh
node -v
```

5. Installing Node-red

```sh
sudo npm install -g --unsafe-perm node-red
```

6. Running Node-RED

```sh
node-red
```

7. Once Node-RED is running you can access the editor on this address: http://localhost:1880.

# Install Node-red on Windows

If you are using Windows, detailed instructions for installing Node-RED can be found [here](https://nodered.org/docs/getting-started/windows).