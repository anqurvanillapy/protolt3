defmodule Protolt3 do
    @on_load :load_nifs

    def load_nifs do
        :erlang.load_nif('./wrap_protolt3', 0)
    end

    # TODO: other function calls
end
