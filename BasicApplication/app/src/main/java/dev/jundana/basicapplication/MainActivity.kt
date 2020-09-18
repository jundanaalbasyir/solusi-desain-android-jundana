package dev.jundana.basicapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import dev.jundana.basicapplication.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)

        setContentView(binding.root)
        buttonClicked()
    }

    private fun buttonClicked() {
        binding.button.setOnClickListener {
            validation()
        }
    }

    private fun validation() {
        when {
            binding.tvString.text.toString().isEmpty() -> {
                binding.tvString.error = "Masukkan String"
            }
            else -> {
                checkString(binding.tvString.text.toString())
            }
        }
    }

    private fun checkString(string: String) {
        if (checkPoliandrom(string) == true) {
            binding.tvHasil.setText("Text Ini Poliandrom")
        } else {
            binding.tvHasil.setText("Text Ini bukan Poliandrom")
        }
    }
}