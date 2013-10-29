# This Makefile will delegate to the cmake generated Makefile
# in the build directory. Be sure to have run ./configure
# to generate this build before trying to run make from the
# project root.

BUILD_DIR := build

.PHONY: all
all:
	$(MAKE) -C $(BUILD_DIR)/

.PHONY: test
test:
	$(MAKE) -C $(BUILD_DIR)/ test

.PHONY: man
man:
	$(MAKE) -C doc/

.PHONY: clean
clean:
	@echo Cleaning out $(BUILD_DIR)/
	@$(RM) -rf $(BUILD_DIR)/*
