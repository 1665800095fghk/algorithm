TARGET=$(f)
all: compile

compile:
	g++ -O2 $(TARGET).cpp -o ./output/$(TARGET)
	./output/$(TARGET)

clean:
	rm ./output/*
