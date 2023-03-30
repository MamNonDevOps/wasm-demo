https://developer.fermyon.com/spin/quickstart

## Linux

### Install Spin
```
curl -fsSL https://developer.fermyon.com/downloads/install.sh | bash
sudo mv ./spin /usr/local/bin/spin
```

### Install template
```
spin templates install --git https://github.com/fermyon/spin --update
```

### Install the Golang and TinyGo
```
wget https://go.dev/dl/go1.20.2.linux-amd64.tar.gz
rm -rf /usr/local/go && sudo tar -C /usr/local -xzf go1.20.2.linux-amd64.tar.gz
export PATH=$PATH:/usr/local/go/bin
```

```
wget https://github.com/tinygo-org/tinygo/releases/download/v0.27.0/tinygo_0.27.0_amd64.deb
sudo dpkg -i tinygo_0.27.0_amd64.deb
export PATH=$PATH:/usr/local/bin
```

### Create new app
```
spin create
```
Then choose `http-go` template, enter description, HTTP base, HTTP path

### Build and run
```
spin build
spin up
```
