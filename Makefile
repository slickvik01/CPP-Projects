.PHONY: clean All

All:
	@echo "----------Building project:[ Hangman - Debug ]----------"
	@cd "HangMan" && $(MAKE) -f  "Hangman.mk"
clean:
	@echo "----------Cleaning project:[ Hangman - Debug ]----------"
	@cd "HangMan" && $(MAKE) -f  "Hangman.mk" clean
