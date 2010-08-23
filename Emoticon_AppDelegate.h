//
//  Emoticon_AppDelegate.h
//  Emoticon
//
//  Created by Fujibayashi Kyou on 8/22/10.
//  Copyright __MyCompanyName__ 2010 . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Emoticon_AppDelegate : NSObject 
{
    NSWindow *window;
    IBOutlet NSArrayController * emotes;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
}

@property (nonatomic, retain) IBOutlet NSWindow *window;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:sender;
- (void)copyToClipboard:(NSString*)str;
- (IBAction)sendtoclipboard:(id)sender;
@end
