/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSDate;

@interface PDComment : NSObject {

	CGPoint mPosition;
	NSString* mText;
	unsigned long long mAuthorId;
	NSDate* mDate;
	unsigned mIndex;
	PDComment* parent;
	NSString* _author;

}

@property (nonatomic,retain) NSString * author;              //@synthesize author=_author - In the implementation block
@property (retain) PDComment * parent; 
-(id)init;
-(id)description;
-(PDComment *)parent;
-(void)setParent:(PDComment *)arg1 ;
-(id)date;
-(unsigned)index;
-(CGPoint)position;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setAuthorId:(unsigned long long)arg1 ;
-(unsigned long long)authorId;
@end

