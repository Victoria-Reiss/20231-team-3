#ifndef ENTIDADE_BASE_HPP
#define ENTIDADE_BASE_HPP

#include <iostream>
#include <string>

// TODO: Implementar
/**
 * Decidir critérios para os nomes, emails e senhas
 */

/**
 * @brief Classe responsavel por atuar como
 * classe pai
 */
class Entidadebase
{
private:
    std::string _nome;
    std::string _senha;
    std::string _email;
    unsigned int _id;

public:
    Entidadebase(
        const std::string nome,
        const std::string senha,
        const std::string email,
        unsigned int id
    );

    std::string getNome();
    std::string getEmail();
    unsigned int getId();
    std::string getSenha();

    void setNome(const std::string &nome);
    void setEmail(const std::string &email);
    void setId(unsigned int id);
    void setSenha(const std::string &senha);
};

#endif