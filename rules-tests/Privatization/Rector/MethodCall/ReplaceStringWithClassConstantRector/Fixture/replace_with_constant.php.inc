<?php

namespace Rector\Tests\Privatization\Rector\MethodCall\ReplaceStringWithClassConstantRector\Fixture;

final class ReplaceWithConstant
{
    public function run()
    {
        $this->call('name');
        $this->call('Name');
    }

    public function call(string $value)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Privatization\Rector\MethodCall\ReplaceStringWithClassConstantRector\Fixture;

final class ReplaceWithConstant
{
    public function run()
    {
        $this->call(\Rector\Tests\Privatization\Rector\MethodCall\ReplaceStringWithClassConstantRector\Source\Placeholder::NAME);
        $this->call('Name');
    }

    public function call(string $value)
    {
    }
}

?>
