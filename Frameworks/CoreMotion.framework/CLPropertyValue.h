/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLPropertyValue : NSObject {

	BOOL _dirty;
	id _value;

}

@property (nonatomic,retain,readonly) id value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL dirty;                     //@synthesize dirty=_dirty - In the implementation block
-(void)dealloc;
-(void)setDirty:(BOOL)arg1 ;
-(id)value;
-(BOOL)dirty;
-(id)initWithValue:(id)arg1 dirty:(BOOL)arg2 ;
@end

