package main

import (
  "fmt"
  "net/http"

  spinhttp "github.com/fermyon/spin/sdk/go/http"
)

func init() {
  spinhttp.Handle(func(w http.ResponseWriter, r *http.Request) {
    w.Header().Set("Content-Type", "text/plain")
    fmt.Println("A new request coming.....")
    fmt.Fprintln(w, "Hello Fermyon!")
  })
}

func main() {}
