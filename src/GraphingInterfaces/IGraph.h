#pragma once

#include "Common.h"
#include "IGraphingOptions.h"
#include "IGraphRenderer.h"
#include "IEquation.h"
#include <optional>

namespace Graphing
{
    struct IGraph : public NonCopyable, public NonMoveable
    {
        virtual ~IGraph() = default;

        virtual std::optional<std::vector<std::shared_ptr<IEquation>>> TryInitialize(const IExpression* graphingExp = nullptr) = 0;

        virtual IGraphingOptions& GetOptions() = 0;

        virtual std::vector<std::shared_ptr<IVariable>> GetVariables() = 0;

        virtual void SetArgValue(std::shared_ptr<IVariable>, double value) = 0;

        virtual std::shared_ptr< Renderer::IGraphRenderer > GetRenderer() const = 0;

        virtual bool TryResetSelection() = 0;
    };
}
