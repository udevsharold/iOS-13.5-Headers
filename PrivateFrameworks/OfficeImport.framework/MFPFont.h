/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface MFPFont : NSObject {

	float mSize;
	int mUnit;
	unsigned mFlags;
	NSString* mName;

}
-(id)name;
-(void)setName:(id)arg1 ;
-(unsigned)flags;
-(float)size;
-(int)unit;
-(void)setSize:(float)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setUnit:(int)arg1 ;
-(CTFontRef)createCTFontWithGraphics:(id)arg1 ;
@end

