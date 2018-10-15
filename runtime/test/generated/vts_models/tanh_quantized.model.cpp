// clang-format off
// Generated file (from: tanh_quantized.mod.py). Do not edit
// Create the model
Model createTestModel() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {256},
            .numberOfConsumers = 1,
            .scale = 0.05f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {256},
            .numberOfConsumers = 0,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TANH,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

