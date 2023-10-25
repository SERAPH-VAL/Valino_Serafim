package main

import "fmt"

func main() {
    var canSwim, hasWings, hasLongNeck string
    fmt.Scan(&canSwim, &hasWings, &hasLongNeck)

    if canSwim == "Да" {
        if hasWings == "Да" {
            if hasLongNeck == "Да" {
                fmt.Println("Утка")
            } else {
                fmt.Println("Пингвин")
            }
        } else if hasLongNeck == "Да" {
            fmt.Println("Плезиозавры")
        } else {
            fmt.Println("Дельфин")
        }
    } else {
        if hasWings == "Да" {
            if hasLongNeck == "Да" {
                fmt.Println("Страус")
            } else {
                fmt.Println("Курица")
            }
        } else if hasLongNeck == "Да" {
            fmt.Println("Жираф")
        } else {
            fmt.Println("Кот")
        }
    }
}