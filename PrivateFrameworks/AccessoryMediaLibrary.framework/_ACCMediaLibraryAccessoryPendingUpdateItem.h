/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _ACCMediaLibraryAccessoryPendingUpdateItem : NSObject {

	int _type;
	NSString* _libraryUID;
	NSString* _revision;
	id _item;

}

@property (nonatomic,readonly) NSString * libraryUID;              //@synthesize libraryUID=_libraryUID - In the implementation block
@property (nonatomic,readonly) NSString * revision;                //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) int type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id item;                            //@synthesize item=_item - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(int)type;
-(id)item;
-(NSString *)revision;
-(NSString *)libraryUID;
-(id)initWithLibrary:(id)arg1 revision:(id)arg2 type:(int)arg3 item:(id)arg4 ;
@end
