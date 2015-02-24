.PHONY: clean All

All:
	@echo "----------Building project:[ GuessMyNumber - Debug ]----------"
	@cd "GuessMyNumber" && $(MAKE) -f  "GuessMyNumber.mk"
clean:
	@echo "----------Cleaning project:[ GuessMyNumber - Debug ]----------"
	@cd "GuessMyNumber" && $(MAKE) -f  "GuessMyNumber.mk" clean
