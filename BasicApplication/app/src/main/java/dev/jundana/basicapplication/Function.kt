package dev.jundana.basicapplication

import android.annotation.SuppressLint

@SuppressLint("DefaultLocale")
fun checkPoliandrom(text: String) : Boolean{
    val testString = text.toLowerCase().replace("""[\W+]""".toRegex(), "")
    return testString == testString.reversed()
}


