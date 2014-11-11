#Estou editando conforme aprendo a usar o git, este é um tutorial com explicações de como eu entendi o uso do git.


Primeiro passo, fui no site e fiz o download do git-scm para windows

http://git-scm.com/downloads

depois de instalado gerei minhas chaves ssh:
	abrindo o git-bash
	ele ja cai na pasta do usuário, dai entrei no diretório .ssh usando " cd .ssh"
	e criei a chave com o comando: ssh-keygen
	ele pede um nome para a chave e a senha com confirmação
	fechei o git-bash
	
	Va no pesquisar do menu iniciar digite cmd
	ai escreva notepad e aperte tab até aparecer o nome da chave que criou com extensão pub, pressiona enter
	
	selecione todo o conteudo e ctrl+c para copiar para area de trabalho
	depois fui ao site www.github.com criei uma conta e fui em configurações, ssh-keys, add keys 
	dei um nome e colei (ctrl+v) a chave que havia copiado anteriormente,adicionei e pronto para
	o uso a partir do pc.
	
	

**Para gerenciar meus repositórios**

Criei um repositório chamado aprender, este que você esta, entrei nele e copiei o "HTTPS clone URL" um ícone que tem uma planilha no canto inferior direito do repositório.



Fui ao cmd do windows criei uma pasta na minha maquina para este repositório que iria clonar para editar.

Depois que estava dentro desta pasta c:\aprender , eu dei o comando:

	git init # para dizer que eu ia iniciar um repositório aqui
 
 
Depois dei um git remote add https://github.com/personrcunha/aprender.git (eata url aqui é o repositorio que copiei anteriormente, para colar no cmd, cliquei na barra de titulos com botao direito do mouse, fui em editar depois em colar.

depois dei um git pull aprender # para pegar as coisas do repositorio "caso tivesse algo"

Comecei a editar, depois de terminada a edição eu dei o comando

	git add .

depois o comando

	git commit -m "Aqui eu coloco o comentario que eu quero que apareça no meu commit"

depois o comando 

	git push aprender  # onde aprender é o nome do repositório criado.




Para começar a contribuir no repositório de alguem é o seguinte:



vou até o repositório e dou uma garfada (FORK) é um ícone com este nome, assim estou tendo a minha copia do tal repositório
ai no github já no meu fork deste repositório eu copio o ...

CONTINUA EM OUTRO MOMENTO....