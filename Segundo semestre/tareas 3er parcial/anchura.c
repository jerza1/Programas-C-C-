void arbol_recorrido_anch (tipo_Arbol* A) {
    tipo_Cola cola_nodos; // esta cola esta implementada previamente
                          // almacena punteros (posiciones de nodos de árbol)
 
    tipo_Pos nodo_actual; // este es un puntero llevara el recorrido
 
    if (vacio(A)) // si el árbol esta vacio, salimos
        return;
 
    cola_inicializa(&cola_nodos); // obvio, y necesario
 
    cola_enqueue(A, &cola_nodos); // se encola la raíz
 
    while (!vacia(&cola_nodos)) { // mientras la cola no se vacie se realizara el recorrido
        nodo_actual = cola_dequeue(&cola_nodos) // de la cola saldran los nodos ordenados por nivel
 
        printf("%c,", nodo_actual->info); // se "procesa" el nodo donde va el recorrido, en este caso se imprime
 
        if (nodo_actual->izq != null) // si existe, ponemos el hijo izquierdo en la cola
            cola_enqueue(nodo_actual->izq, &cola_nodos);
 
        if (nodo_actual->der != null) // si existe, ponemos el hijo derecho en la cola
            cola_enqueue(nodo_actual->der, &cola_nodos);
 
        } // al vaciarse la cola se han visitado todos los nodos del árbol
    }
