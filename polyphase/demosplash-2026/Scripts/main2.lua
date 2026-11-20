main2 = {}

function main2:Create()

self:EnableOverlaps(false)
self:EnablePhysics(false) 
self:EnableOverlaps(false)

end

--i think this should be moving forward
function main2:Tick(deltaTime)

self:AddRotation(Vec(0,0,10* deltaTime))
self:UpdateTransform(false)
end

