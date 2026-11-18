main = {}

function main:Create()

self:SetRotation(Vec(0,0,0))
self:EnableOverlaps(false)
self:EnablePhysics(false) 
self:EnableOverlaps(false)

end

--i think this should be moving forward
function main:Tick(deltaTime)

self:AddRotation(Vec(0,60*deltaTime,30* deltaTime))
self:UpdateTransform(false)
end

