### `tf.contrib.graph_editor.placeholder_name(t=None, scope=None)` {#placeholder_name}

Create placeholder name for tjhe graph editor.

##### Args:


*  <b>`t`</b>: optional tensor on which the placeholder operation's name will be based
    on
*  <b>`scope`</b>: absolute scope with which to predix the placeholder's name. None
    means that the scope of t is preserved. "" means the root scope.

##### Returns:

  A new placeholder name prefixed by "geph". Note that "geph" stands for
    Graph Editor PlaceHolder. This convention allows to quickly identify the
    placeholder generated by the Graph Editor.

##### Raises:


*  <b>`TypeError`</b>: if t is not None or a tf.Tensor.
