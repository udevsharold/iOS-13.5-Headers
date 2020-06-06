/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface INUIExtensionViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _parameters;
	unsigned long long _interactiveBehavior;
	unsigned long long _hostedViewContext;

}

@property (nonatomic,copy,readonly) NSSet * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned long long interactiveBehavior;              //@synthesize interactiveBehavior=_interactiveBehavior - In the implementation block
@property (nonatomic,readonly) unsigned long long hostedViewContext;                //@synthesize hostedViewContext=_hostedViewContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)parameters;
-(unsigned long long)interactiveBehavior;
-(id)initWithParameters:(id)arg1 interactiveBehavior:(unsigned long long)arg2 hostedViewContext:(unsigned long long)arg3 ;
-(unsigned long long)hostedViewContext;
@end

