#ifndef NICE_SLAM_CPP_DATASET_H
#define NICE_SLAM_CPP_DATASET_H

#include <torch/torch.h>

namespace Utils
{

    class MyDataset : public torch::data::Dataset<MyDataset>
    {

    private:
        std::vector <std::string> colorDataFiles_;
        std::vector <std::string> depthDataFiles_;
        torch::Tensor colorFrame_;
        torch::Tensor depthFrame_;

    public:
        explicit MyDataset(const std::string &colorDataPath, const std::string &depthDataPath);

        torch::data::Example<> MyDataset::get(size_t index);

        void readColorDataFiles(const std::string &colorDataPath);

        void readDepthDataFiles(const std::string &depthDataPath);
    }

}

#endif //NICE_SLAM_CPP_DATASET_H
