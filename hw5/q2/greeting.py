import typer

def greet(name: str) -> str: 
    print(f"hello, {name}")

def cli():
    typer.run(greet)

if __name__ == "__main__":
    cli()
