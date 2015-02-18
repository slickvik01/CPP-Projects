.PHONY: clean All

All:
	@echo "----------Building project:[ Fibonacci - Debug ]----------"
	@cd "/Users/vikram/Documents/Fibonacci" && $(MAKE) -f  "Fibonacci.mk"
clean:
	@echo "----------Cleaning project:[ Fibonacci - Debug ]----------"
	@cd "/Users/vikram/Documents/Fibonacci" && $(MAKE) -f  "Fibonacci.mk" clean
