def buscar_arquivo(pasta, nome):
    # CASO BASE
    if nome in pasta:
        return True

    # PASSO RECURSIVO
    for item in pasta.values():
        if isinstance(item, dict):
            if buscar_arquivo(item, nome):
                return True

    return False


estrutura = {
    "docs": {
        "arquivo.txt": None,
        "imagens": {
            "foto.png": None
        }
    }
}

print(buscar_arquivo(estrutura, "foto.png"))

"""
ANÁLISE:
Caso Base: quando o arquivo é encontrado.
Passo Recursivo: percorre subpastas chamando a função novamente.
"""