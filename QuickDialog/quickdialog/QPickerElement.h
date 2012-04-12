#import <Foundation/Foundation.h>
#import "QEntryElement.h"
#import "QPickerValueParser.h"

@interface QPickerElement : QEntryElement
{
@protected
    id<QPickerValueParser> _valueParser;
}

@property (nonatomic, strong) id<QPickerValueParser> valueParser;
@property (nonatomic, copy) void (^onValueChanged)(void);

@property(nonatomic, strong) NSArray *items;

- (QPickerElement *)initWithTitle:(NSString *)title items:(NSArray *)items value:(NSString *)value;

@end