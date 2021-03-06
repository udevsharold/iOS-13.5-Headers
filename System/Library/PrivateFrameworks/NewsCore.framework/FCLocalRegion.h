/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FCLocalRegion : NSObject {

	NSString* _identifier;
	NSArray* _autoFavoriteTagIDs;
	NSArray* _localVersionedTagIDs;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * autoFavoriteTagIDs;                //@synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs - In the implementation block
@property (nonatomic,retain) NSArray * localVersionedTagIDs;              //@synthesize localVersionedTagIDs=_localVersionedTagIDs - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)autoFavoriteTagIDs;
-(void)setAutoFavoriteTagIDs:(NSArray *)arg1 ;
-(NSArray *)localVersionedTagIDs;
-(void)setLocalVersionedTagIDs:(NSArray *)arg1 ;
@end

