main = {}

function main:Create()

self:SetRotation(Vec(0,0,0))
self:EnableOverlaps(false)
self:EnablePhysics(false) 
self:EnableOverlaps(false)

end

--i think this should be moving forward
function main:Tick(deltaTime)

self:AddRotation(Vec(0,0,30* deltaTime))
self:UpdateTransform(false)
end

