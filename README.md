# 🚀 Guia Prático de Git

<div align="center">
  
  ![Git Logo](https://git-scm.com/images/logos/downloads/Git-Logo-2Color.png)
  
  *Um guia amigável para iniciantes em Git*
  
  [![Made with love](https://img.shields.io/badge/Made%20with-%E2%9D%A4-red.svg)](https://shields.io/) 
  [![Git](https://img.shields.io/badge/Git-2.37+-blue.svg)](https://git-scm.com/) 
  [![Markdown](https://img.shields.io/badge/Markdown-1.0.1-lightgrey.svg)](https://daringfireball.net/projects/markdown/)

</div>

---

## 📋 Índice

- [Configuração Inicial](#-configuração-inicial)
- [Clone do Repositório](#-clone-do-repositório)
- [Trabalhando com Branches](#-trabalhando-com-branches)
- [Salvando Alterações](#-salvando-alterações)
- [Atualizando seu Repositório](#-atualizando-seu-repositório)
- [Comandos Úteis](#-comandos-úteis)
- [Resolvendo Problemas](#-resolvendo-problemas)

---

## 🔧 Configuração Inicial

Antes de começar a usar o Git, configure seu nome e email:

```bash
# Configurar seu nome
git config --global user.name "Seu Nome"

# Configurar seu email
git config --global user.email "seu-email@exemplo.com"
```

## 📦 Clone do Repositório

Para obter uma cópia do projeto no seu computador:

```bash
# Clone o repositório
git clone https://github.com/usuario/nome-do-repositorio.git

# Entre na pasta do projeto
cd nome-do-repositorio
```

## 🌿 Trabalhando com Branches

As branches permitem que você trabalhe em funcionalidades sem afetar a versão principal.

### Visualizar branches existentes
```bash
# Ver todas as branches locais
git branch

# Ver todas as branches (incluindo remotas)
git branch -a
```

### Mudar de branch
```bash
# Método tradicional
git checkout nome-da-branch

# Método moderno (Git 2.23+)
git switch nome-da-branch
```

### Criar uma nova branch
```bash
# Criar e mudar para nova branch
git checkout -b minha-nova-funcionalidade

# Alternativa moderna
git switch -c minha-nova-funcionalidade
```

## 💾 Salvando Alterações

### Verificar status das alterações
```bash
git status
```

### Adicionar arquivos para commit
```bash
# Adicionar um arquivo específico
git add caminho/do/arquivo.txt

# Adicionar todos os arquivos modificados
git add .
```

### Fazer commit das alterações
```bash
git commit -m "Adiciona nova funcionalidade de login"
```

### Enviar alterações para o repositório remoto
```bash
git push origin nome-da-branch
```

## 🔄 Atualizando seu Repositório

### Obter alterações mais recentes
```bash
# Baixar e integrar alterações
git pull origin nome-da-branch

# Apenas baixar alterações (sem integrar)
git fetch
```

## 🛠️ Comandos Úteis

### Histórico de commits
```bash
# Ver histórico completo
git log

# Versão simplificada
git log --oneline

# Histórico com gráfico de branches
git log --oneline --graph --all
```

### Desfazer alterações
```bash
# Desfazer alterações em arquivo não adicionado
git restore arquivo.txt

# Remover arquivo do staging (após git add)
git restore --staged arquivo.txt

# Reverter um commit mantendo as alterações em staging
git reset --soft HEAD~1

# Reverter um commit descartando as alterações
git reset --hard HEAD~1
```

## 🆘 Resolvendo Problemas

Se algo der errado, não se preocupe! Tente estes comandos:

```bash
# Ver o estado atual
git status

# Ver histórico de ações (útil se você se perder)
git reflog

# Pausar alterações temporariamente
git stash

# Recuperar alterações pausadas
git stash pop
```

---

<div align="center">
  
  ### 💖 Dicas Especiais
  
  * Sempre faça `git pull` antes de começar a trabalhar
  * Escreva mensagens de commit claras e descritivas
  * Crie branches separadas para cada funcionalidade ou correção
  * Não tenha medo de cometer erros - o Git foi feito para ajudar!

  <br>
  
  **Feito com ❤️ para você**
  
</div>
