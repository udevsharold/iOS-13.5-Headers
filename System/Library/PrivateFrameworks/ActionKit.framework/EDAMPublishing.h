/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMPublishing : FATObject {

	NSString* _uri;
	NSNumber* _order;
	NSNumber* _ascending;
	NSString* _publicDescription;

}

@property (nonatomic,retain) NSString * uri;                            //@synthesize uri=_uri - In the implementation block
@property (nonatomic,retain) NSNumber * order;                          //@synthesize order=_order - In the implementation block
@property (nonatomic,retain) NSNumber * ascending;                      //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,retain) NSString * publicDescription;              //@synthesize publicDescription=_publicDescription - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)ascending;
-(NSNumber *)order;
-(void)setOrder:(NSNumber *)arg1 ;
-(void)setAscending:(NSNumber *)arg1 ;
-(NSString *)uri;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)publicDescription;
-(void)setPublicDescription:(NSString *)arg1 ;
@end

