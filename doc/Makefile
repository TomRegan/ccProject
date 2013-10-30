OUTPUT := helloworld.1

.PHONY: all
all: check
	pandoc -s -t man helloworld.md -o $(OUTPUT)

.PHONY: check
check : 
	@which pandoc 1>&2 > /dev/null

.PHONY: clean
clean:
	@echo "Cleaning out doc/"
	@$(RM) $(OUTPUT)
