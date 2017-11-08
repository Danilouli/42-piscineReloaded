find . -name "*.sh" -print | xargs basename | rev | cut -c4- | rev
