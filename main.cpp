#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Abre a imagem (coloque o caminho correto de uma imagem aqui)
    cv::Mat image = cv::imread("images.jpg");

    if (image.empty()) {
        std::cout << "Não foi possível abrir a imagem!" << std::endl;
        return -1;
    }

    cv::imshow("Janela de Teste", image);
    cv::waitKey(0);
    return 0;
}