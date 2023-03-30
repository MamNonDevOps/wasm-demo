## Windows Guide

### Install Docker Desktop version >= 4.18.0

### Install DotNet7

`https://dotnet.microsoft.com/en-us/download/dotnet/7.0`

### Install wasmtime

`https://github.com/bytecodealliance/wasmtime/releases`

### Create new dotnet project
```
dotnet new console -o dotnet-wasmtime
```
Then `cd dotnet-wasmtime` directory

### Add wasi sdk
```
dotnet add package wasi.sdk
```

### Build to wasm
```
dotnet build
```

### Run wasm file
```
wasmtime .\bin\Debug\net7.0\dotnet-wasmtime.wasm
```

### Create Dockerfile

### Build image
```
docker buildx build --platform=wasi/wasm -t dotnet-wasm-img .
```

### Run container
Use runtime `wasmtime` or `wasmedge`
```
docker run --rm -p 3000:80 --runtime=io.containerd.wasmtime.v1 --platform=wasi/wasm dotnet-wasm-img:latest

docker run --rm -p 3000:80 --runtime=io.containerd.wasmedge.v1 --platform=wasi/wasm dotnet-wasm-img:latest
```
