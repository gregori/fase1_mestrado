.PHONY: all clean

all:
	@echo ----------Building project:[ Pessoa - Debug ]----------
	@cd "Pessoa" && "$(MAKE)" -f "Pessoa.mk"
clean:
	@echo ----------Cleaning project:[ Pessoa - Debug ]----------
	@cd "Pessoa" && "$(MAKE)" -f "Pessoa.mk" clean
