/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage : TSPObject {

	NSMutableSet* mAuthors;

}

@property (nonatomic,readonly) NSSet * authors; 
-(void)dealloc;
-(id)description;
-(NSSet *)authors;
-(id)packageLocator;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(void)p_addAuthor:(id)arg1 isFromDocumentSupport:(BOOL)arg2 ;
-(id)authorWithName:(id)arg1 ;
-(void)addAuthor:(id)arg1 ;
-(void)removeAuthor:(id)arg1 ;
-(id)nextAuthorColor;
-(void)didAddAuthorRelationshipToDocument;
-(void)didRemoveAuthorRelationshipFromDocument;
@end
