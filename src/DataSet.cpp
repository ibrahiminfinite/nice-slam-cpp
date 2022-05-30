#include "DataSet.h"


Utils::MyDataset::MyDataset(const std::string& loc_states, const std::string& loc_labels)
{

};

torch::data::Example<> Utils::MyDataset::get(size_t index)
{
    // Writes to the colorFrame_ and depthFrame tensors directly.
    readColorDataFiles(index);
    readDepthDataFiles(index);
    return {colorFrame_, depthFrame_};
}
