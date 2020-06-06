/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSDictionary;

@interface QLStringWrapper : NSObject {

	NSAttributedString* _string;
	NSDictionary* _attributes;

}

@property (retain) NSAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (retain) NSDictionary * attributes;                //@synthesize attributes=_attributes - In the implementation block
-(NSAttributedString *)string;
-(void)setString:(NSAttributedString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

