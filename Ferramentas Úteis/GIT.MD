#Estou editando conforme aprendo a usar o git, este � um tutorial com explica��es de como eu entendi o uso do git.


Primeiro passo, fui no site e fiz o download do git-scm para windows

http://git-scm.com/downloads

depois de instalado gerei minhas chaves ssh:
	abrindo o git-bash
	ele ja cai na pasta do usu�rio, dai entrei no diret�rio .ssh usando " cd .ssh"
	e criei a chave com o comando: ssh-keygen
	ele pede um nome para a chave e a senha com confirma��o
	fechei o git-bash
	
	Va no pesquisar do menu iniciar digite cmd
	ai escreva notepad e aperte tab at� aparecer o nome da chave que criou com extens�o pub, pressiona enter
	
	selecione todo o conteudo e ctrl+c para copiar para area de trabalho
	depois fui ao site www.github.com criei uma conta e fui em configura��es, ssh-keys, add keys 
	dei um nome e colei (ctrl+v) a chave que havia copiado anteriormente,adicionei e pronto para
	o uso a partir do pc.
	
	

**Para gerenciar meus reposit�rios**

Criei um reposit�rio chamado aprender, este que voc� esta, entrei nele e copiei o "HTTPS clone URL" um �cone que tem uma planilha no canto inferior direito do reposit�rio.



Fui ao cmd do windows criei uma pasta na minha maquina para este reposit�rio que iria clonar para editar.

Depois que estava dentro desta pasta c:\aprender , eu dei o comando:

	git init # para dizer que eu ia iniciar um reposit�rio aqui
 
 
Depois dei um git remote add https://github.com/personrcunha/aprender.git (eata url aqui � o repositorio que copiei anteriormente, para colar no cmd, cliquei na barra de titulos com botao direito do mouse, fui em editar depois em colar.

depois dei um git pull aprender # para pegar as coisas do repositorio "caso tivesse algo"

Comecei a editar, depois de terminada a edi��o eu dei o comando

	git add .

depois o comando

	git commit -m "Aqui eu coloco o comentario que eu quero que apare�a no meu commit"

depois o comando 

	git push aprender  # onde aprender � o nome do reposit�rio criado.




Para come�ar a contribuir no reposit�rio de alguem � o seguinte:



vou at� o reposit�rio e dou uma garfada (FORK) � um �cone com este nome, assim estou tendo a minha copia do tal reposit�rio
ai no github j� no meu fork deste reposit�rio eu copio o ...

CONTINUA EM OUTRO MOMENTO....