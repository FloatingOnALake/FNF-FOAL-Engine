package;

import flixel.FlxObject;
import flixel.addons.effects.FlxSkewedSprite;

class Floor extends FlxSkewedSprite
{
    private var cameraPos:FlxObject;

	public function new(cameraPos:FlxObject, image:String, x:Float = 0, y:Float = 0)
	{
		super(x, y);
        this.cameraPos = cameraPos;
		loadGraphic(Paths.image(image));
		updateHitbox();
		offset.set(width / 2);
		antialiasing = ClientPrefs.globalAntialiasing;
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
        skew.x = (x - cameraPos.x) / 10;
	}
}