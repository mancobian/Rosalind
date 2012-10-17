#include <iostream>
#include <string>
#include <problems/counting_nucleotides/problem.h>

using namespace mancobian::rosalind::problems;

int main(int argc, char **argv)
{
    std::string output;
    counting_nucleotides::Problem problem;
    problem.solve("AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC", output);

    std::cout << output << std::endl;
    system("pause");
    return 0;
}