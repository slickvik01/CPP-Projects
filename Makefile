.PHONY: clean All

All:
	@echo "----------Building project:[ DistanceConverter - Debug ]----------"
	@cd "DistanceConverter" && $(MAKE) -f  "DistanceConverter.mk"
clean:
	@echo "----------Cleaning project:[ DistanceConverter - Debug ]----------"
	@cd "DistanceConverter" && $(MAKE) -f  "DistanceConverter.mk" clean
