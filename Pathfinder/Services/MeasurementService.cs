using Microsoft.AspNetCore.Components;
using Microsoft.JSInterop;
using Pathfinder.Model;

namespace Pathfinder.Services
{
    public class MeasurementService
    {
        private readonly IJSRuntime _jsRuntime;

        public MeasurementService(IJSRuntime jsRuntime)
        {
            _jsRuntime = jsRuntime;
        }

        public async Task<BoundingClientRect> GetBoundingClientRect(ElementReference element)
        {
            return await _jsRuntime.InvokeAsync<BoundingClientRect>("GetBoundingClientRect", element);
        }
    }
}
