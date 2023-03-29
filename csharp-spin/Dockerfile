FROM scratch

COPY bin/Release/net7.0/CsharpSpin.wasm CsharpSpin.wasm
COPY spin.toml spin.toml

ENTRYPOINT [ "CsharpSpin.wasm" ]
