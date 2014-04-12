# This Makefile will delegate to the cmake generated Makefile
# in the build directory. Be sure to have run ./configure
# to generate this build before trying to run make from the
# project root.

BUILD_DIR := build
DOCS_DIR := doc

.PHONY: all
all:
	$(MAKE) -C $(BUILD_DIR)/

.PHONY: test
test:
	$(MAKE) -C $(BUILD_DIR)/ test

.PHONY: man
man:
	$(MAKE) -C $(DOCS_DIR)/

.PHONY: clean
clean:
	@echo Cleaning out $(BUILD_DIR)/
	@$(RM) -rf $(BUILD_DIR)/*
	@$(MAKE) -C $(DOCS_DIR)/ clean

.PHONY: targets
targets:
	@echo "Makefile provides the following targets:\n"
	@echo "\tall\t\tbuild the application"
	@echo "\ttest\t\trun unit tests"
	@echo "\tman\t\tbuild the documentation"
	@echo "\tclean\t\tremove files in $(BUILD_DIR) and $(DOCS_DIR)\n"
